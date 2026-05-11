// ============================================================
// 函数名称: sub_40be78
// 虚拟地址: 0x40be78
// WARP GUID: 2e5224e8-a890-5048-a5e9-5adcc74fbb99
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078
// [被调用的父级函数]: sub_40beec, sub_40bf50
// ============================================================

int32_t __fastcallsub_40be78(int32_t* arg1, int32_t arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t* var_c = arg1
    int32_t* var_c = arg1
    int32_t eax_1 = sub_404078(arg3)
    int32_t edx = 1
    int32_t i
    
    for (i = 1; eax_1 s> i; i += 1)
        if (edx s>= arg2)
            break
        
        edx += 1
        arg1.b = *(arg3 + i - 1)
        
        if (test_bit(data_52e118, arg1 & 0xff))
            i += 1
    
    if (edx == arg2 && eax_1 s> i)
        arg1.b = *(arg3 + i - 1)
        
        if (test_bit(data_52e118, arg1 & 0xff))
            i += 1
    
    *var_c = edx
    *arg4 = i
    return i
}
