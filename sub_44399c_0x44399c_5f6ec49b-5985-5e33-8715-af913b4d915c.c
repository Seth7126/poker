// ============================================================
// 函数名称: sub_44399c
// 虚拟地址: 0x44399c
// WARP GUID: 5f6ec49b-5985-5e33-8715-af913b4d915c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441d68, sub_42ee80
// [被调用的父级函数]: sub_472ccc, sub_446ad8, sub_47d208, sub_471144, sub_473684, sub_44c778
// ============================================================

void __convention("regparm")sub_44399c(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x211))
    if (arg2 == *(arg1 + 0x211))
        return 
    
    *(arg1 + 0x211) = arg2
    
    if (arg2 == 2 || arg2 == 5)
        arg2 = 1
    else
        arg2 = 0
    
    sub_441d68(arg1, arg2)
    
    if ((*(arg1 + 0x20) & 0x10) == 0)
        sub_42ee80(arg1)
}
