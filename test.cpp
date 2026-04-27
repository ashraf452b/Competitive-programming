/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 02:08:46 09/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
bool flag;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL; //initiali shob next NULL kore diyechi
    }

};
void rhafsolve(int n)
{
    Node *a= new Node(10);
    Node *b= new Node(20);
    a->next=b;
    b->next=NULL;
    cout<<a->val<<" "<<b->val<<endl;
}
int main() {
    FAST_IO;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        int n;
        cin>>n;
        rhafsolve(n);
    }

    return 0;
}



public class Main {
    public static void main(String[] args) throws ArithmeticException {
        try {
            checkNumber(0);
        } catch (ArithmeticException e) {
            System.out.println("Error occurred: " + e.getMessage());
        } finally {
            System.out.println("Done");
        }
    }

    static void checkNumber(int num) {
        if (num == 0) {
            throw new ArithmeticException("Cannot divide by zero");
        }
    }
}