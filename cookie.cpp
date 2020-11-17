#include <iostream>
using namespace std;
typedef int valueType;

struct TreeNode
{
  valueType val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(valueType val, TreeNode* left=0, TreeNode* right=0)
    : val(val), left(left), right(right) {}
};
int day,n,k,num;
main()
{
  
  cin >>  day;
  TreeNode* head = new TreeNode(0);
  TreeNode* tail =  head;
  TreeNode* point = head;
  TreeNode* print = head;
  for(int i=0 ; i<day ; i++){
    cin >> n;
    if(n == 1){
		cin >> k >> num;
		for(int i =0 ; i <= k ; i++){
			point = point->right;
			}
		if((point->right == NULL) && (point->left == NULL)){
			tail->right = new TreeNode(num);
			tail = tail->right;
			point = head;
			}
		if((point->right == NULL) && (point->left != NULL)){
			point->right = new TreeNode(num);
			tail= point->right;
			point = head;
			}
		if((point->right != NULL) && (point->left != NULL)){
			TreeNode* add = new TreeNode(num);
			add->right = point->right;
			tail = point->right;
			point->right = add;
			point = head;
			}
		}
	}
	if(n==2){
		cin >> k;
		for(int i =0 ; i <= k ; i++){
			point = point->right;
			}
		if(point->val == NULL){
			point = head;
			}
			
		if(point->val != NULL){
			
			
			point = head;
			}
		} 
	
	}
}
  
	


  
