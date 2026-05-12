// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

int main()
{
    //  ストリング型に表示させたいテキスト（Hello World!）を入れる
    std::string text = "Hello World!";
    //  反転させる用のテキスト用変数
    std::string text_rev = text;
    //  テキストを反転
    std::reverse(text_rev.begin(), text_rev.end());

    //  型推論（今回はint型）
    auto i = 10;

//    for (int i = 0; i < 100; ++i) 
    while(i--)
    {
        //  ２回に１回反転した文字列を出力する
//        if (i % 2 == 0)
        //  論理積で判定
        //  余剰よりも論理積での判定の法が処理が軽い
        if(i & 1)
        {
            //  出力
            std::cout << text << std::endl;
        }
        else
        {
            //  出力
            std::cout << text_rev << std::endl;
        }
    }
}

