#include <bits/stdc++.h>

using namespace std;

struct Student {
    bool gender;
    std::string name;
    bool used = false;
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<Student> students(n);
    for (auto& stu : students) {
        std::cin >> stu.gender >> stu.name;
    }

    for (int i = 0; i < n / 2; ++i) {
        auto it = ranges::find_if(students | std::views::reverse, [&](const auto& s) {
            return s.gender == !students[i].gender && !s.used;
        });
        it->used = true;
        std::cout << students[i].name << " " << it->name << "\n";
    }
}