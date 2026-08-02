#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
   vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();
    
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {

            int index = -1;

            for (int j = 0; j < nums2.size(); j++) {
                if (nums2[j] == nums1[i]) {
                    index = j;
                    break;
                }
            }

            int greater = -1;

            for (int j = index + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums1[i]) {
                    greater = nums2[j];
                    break;
                }
            }

            ans.push_back(greater);
        }

        return ans;
    }
};

int main() {

    int n1, n2;

    cout << "Enter size of nums1: ";
    cin >> n1;

    vector<int> nums1(n1);

    cout << "Enter nums1 elements:\n";
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];

    cout << "Enter size of nums2: ";
    cin >> n2;

    vector<int> nums2(n2);

    cout << "Enter nums2 elements:\n";
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];

    Solution obj;
    vector<int> ans = obj.nextGreaterElement(nums1, nums2);

    cout << "\nNext Greater Elements:\n";
    for (int x : ans)
        cout << x << " ";

    return 0;
}
