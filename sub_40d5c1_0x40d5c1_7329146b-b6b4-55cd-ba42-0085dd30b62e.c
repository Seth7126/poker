// ============================================================
// 函数名称: sub_40d5c1
// 虚拟地址: 0x40d5c1
// WARP GUID: 7329146b-b6b4-55cd-ba42-0085dd30b62e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40d6ef, sub_40d5e8
// [被调用的父级函数]: sub_40d01e
// ============================================================

int32_t __fastcallsub_40d5c1(char arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    long double x87_r0
    
    if (arg1 == 0)
        return sub_40d5e8(ebp, arg2, x87_r0)
    return sub_40d6ef(ebp, arg2)
}
