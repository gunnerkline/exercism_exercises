#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded_down{};
    for (double score : student_scores) {
        rounded_down.push_back(static_cast<int>(score));
    }
    return rounded_down;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int fail_count{};

    // TODO: Implement count_failed_students
    for (double score : student_scores) {
        if (score <= 40) {
            ++fail_count;
        }
    }
    return fail_count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    double slice{ static_cast<double>((highest_score - 40) / 4) };
    std::array<int, 4> high_grades{};
    high_grades[0] = 41;
    for (int i{ 1 }; i < 4; ++i) {
        high_grades.at(i) = static_cast<int>(41 + slice*i);
    }
    return high_grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> sorted{};
    std::string entry;
    for (int i{ 0 }; i < student_scores.size(); ++i) {
        entry = std::to_string(i + 1) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i));
        sorted.push_back(entry);
    }
    return sorted;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    int p_index{ 0 };
    for (p_index = 0; p_index <= student_scores.size() - 1; ++p_index) {
        if (student_scores.at(p_index) == 100) {
            return student_names.at(p_index);
        }
    }
    return "";
}
