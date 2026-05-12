// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

int main()
{
    //  ストリング型に表示させたいテキスト（Hello World!）を入れる
    std::string text = "Hello World!";

    for (int i = 0; i < 100; ++i) 
    {
        //  ２回に１回反転した文字列を出力する
        if (i % 2 == 0)
        {
            //  出力
            std::cout << text << std::endl;
        }
        else
        {
            //  文字列を反転
            std::reverse(text.begin(), text.end());
            //  出力
            std::cout << text << std::endl;
            //  文字列を反転させて元の文字列の並びに戻す
            std::reverse(text.begin(), text.end());
        }
    }
}

