class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        vector<int> arr;
        ListNode* temp = head;

        // Extract values into array
        while (temp != nullptr) {
            arr.push_back(temp->val);  
            temp = temp->next;
        }

        // Sort the array
        sort(arr.begin(), arr.end());

        // Rewrite values back to the list
        temp = head;
        for (int i = 0; i < arr.size(); i++) {
            temp->val = arr[i];  //
            temp = temp->next;
        }

        return head;
    }
};
