#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool search(char **board, int i, int j, int rowsize, int colsize, int count, string word)
{
    if (count == word.size())
    {
        return true;
    }
    if (i == -1 || i == rowsize || j == -1 || j == colsize || board[i][j] != word[count])
    {
        return false;
    }
    char temp = board[i][j];
    board[i][j] = '*';
    bool found = search(board, i + 1, j, rowsize, colsize, count + 1, word) ||
                 search(board, i, j + 1, rowsize, colsize, count + 1, word) ||
                 search(board, i - 1, j, rowsize, colsize, count + 1, word) ||
                 search(board, i, j - 1, rowsize, colsize, count + 1, word);
    board[i][j] = temp;
    return found;
}

bool exist(vector<vector<char>> &board, string word)
{
    char **boards = new char *[board.size()];
    for (int i = 0; i < board.size(); i++)
    {
        boards[i] = new char[board[0].size()];
        for (int j = 0; j < board[0].size(); j++)
        {
            boards[i][j] = board[i][j];
        }
    }

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (search(boards, i, j, board.size(), board[0].size(), 0, word))
            {
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<char>> board;
    board.push_back({'S', 'F', 'C', 'S'});
    board.push_back({'A', 'B', 'C', 'E'});
    board.push_back({'A', 'D', 'E', 'E'});                                                        
    string word = "SEE";
    cout<<(exist(board, word)? "Exists": "Dosen't Exists");
}