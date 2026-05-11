// ============================================================
// 函数名称: sub_42b644
// 虚拟地址: 0x42b644
// WARP GUID: 58915076-bb47-5a5a-9df6-80923d331a18
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_42e780, sub_42aebc, sub_42e6ac, sub_40b56c
// [被调用的父级函数]: sub_443288
// ============================================================

void __convention("regparm")sub_42b644(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (arg2 == ebx[9])
        return 
    
    if (ebx == arg2)
        arg2.b = 1
        sub_40b56c(sub_40eacb+0x7d, arg2, data_530728)
        sub_403828()
        noreturn
    
    arg1 = ebx[9]
    
    if (arg1 != 0)
        sub_42e780(arg1, ebx)
    
    if (arg2 != 0)
        sub_42e6ac(arg2, ebx)
        sub_42aebc(ebx)
}
