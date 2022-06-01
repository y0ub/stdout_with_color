# stdout_with_color
## c++で色をつけて標準出力  


  ### src/stdout_with_color.cc より抜粋  
  赤文字で出力
  `std::cout << RED "Hello, World!!!!11!" << '\n';  `
  上記の出力の後にはこれも赤文字になる
  `std::cout << "Good afternoon" << '\n';  `
  リセット
  `std::cout << RESET;  `
  デフォルトの色で出力される  
  `std::cout << "Good night" << '\n';`
