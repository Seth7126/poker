// ============================================================
// 函数名称: sub_49be1c
// 虚拟地址: 0x49be1c
// WARP GUID: c1eb155c-fd96-5b59-97fe-2da0c0e67d08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_403010, sub_4106dc
// [被调用的父级函数]: sub_49bf10
// ============================================================

void __convention("regparm")sub_49be1c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    (*(*arg1 + 8))()
    sub_4106dc(arg1, *arg2)
    int32_t i_2 = *arg2
    
    if (add_overflow(i_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i_2 - 1 s< 0)
        return 
    
    int32_t i_1 = i_2
    void* ebx_1 = &arg2[1]
    int32_t i
    
    do
        sub_4103c8(arg1, *ebx_1)
        ebx_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
}
