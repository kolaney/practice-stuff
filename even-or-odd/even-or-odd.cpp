// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
bool is_list_even(listNode* head)
{
    bool answer = true;
    if(!head){
        return answer;
    }else{
        while(true){
            answer = !answer;
            if(!head->next){
                return answer;
            }else{
                head = head->next;
            }
        }
    }


    
}