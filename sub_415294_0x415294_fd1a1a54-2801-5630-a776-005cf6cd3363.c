// ============================================================
// 函数名称: sub_415294
// 虚拟地址: 0x415294
// WARP GUID: fd1a1a54-2801-5630-a776-005cf6cd3363
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c
// [被调用的父级函数]: sub_415310, sub_415370, sub_4152e8
// ============================================================

void __convention("regparm")sub_415294(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t i = arg1
    int32_t i = arg1
    
    while (i s> 0)
        void var_104
        
        if (i s<= 0x100)
            sub_413a6c(*(arg2 - 4), &var_104, i)
            i = 0
        else
            sub_413a6c(*(arg2 - 4), &var_104, 0x100)
            i -= 0x100
}
