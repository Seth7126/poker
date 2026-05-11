// ============================================================
// 函数名称: sub_50d620
// 虚拟地址: 0x50d620
// WARP GUID: 712e10ba-3755-5adc-a03a-a4cb748775f0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c
// [被调用的父级函数]: sub_511bec
// ============================================================

void __convention("regparm")sub_50d620(void* arg1, char** arg2)
{
    // 第一条实际指令: char** ebx = arg2
    char** ebx = arg2
    arg2.b = *(arg1 + 0x1b1f6)
    
    switch (arg2.b)
        case 0
            sub_403e4c(ebx, "isNotConnected")
        case 2
            sub_403e4c(ebx, "isConnecting")
        case 3
            sub_403e4c(ebx, "isWelcome")
        case 4
            sub_403e4c(ebx, "isConnected")
        case 5
            sub_403e4c(ebx, "isInRoom")
        case 6
            sub_403e4c(ebx, "isInGame")
        case 7
            sub_403e4c(ebx, "isDirectConnecting")
        case 8
            sub_403e4c(ebx, "isListing")
        case 9
            sub_403e4c(ebx, "isError")
}
