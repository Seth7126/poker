// ============================================================
// 函数名称: sub_516d08
// 虚拟地址: 0x516d08
// WARP GUID: cb3252ed-c832-526f-b8cd-5af912187185
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_513ffc, sub_509ed4, sub_50b624, sub_403010
// [被调用的父级函数]: sub_509890, sub_5166d8
// ============================================================

int32_t* __thiscallsub_516d08(int32_t arg1, void* arg2 @ eax, int32_t* arg3)
{
    // 第一条实际指令: if (*arg3 != 0x2745)
    if (*arg3 != 0x2745)
        sub_50b624(0xe, nullptr, arg2, arg1)
    
    for (int32_t i = 1; i != 9; i += 1)
        bool o_1 = unimplemented  {imul eax, ebx, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (arg1 == *(arg2 + i * 0x3a4 + 0x194))
            sub_509ed4(i)
            sub_513ffc(arg2)
            break
    
    *arg3 = 0
    return arg3
}
