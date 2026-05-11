// ============================================================
// 函数名称: sub_4f87f0
// 虚拟地址: 0x4f87f0
// WARP GUID: eb1cbb7a-9e84-51b1-b0f8-0e837b8e1205
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f45ec, sub_403010
// [被调用的父级函数]: sub_4f8b60
// ============================================================

void*sub_4f87f0(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_4f45ec()
    int32_t eax_2 = *(arg1 - 8)
    
    if (neg.d(eax_2) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_5301d4)(fconvert.s(float.t(*(arg1 - 4)) / fconvert.t(100f) - data_4f8954 - data_4f8960), 
        fconvert.s(float.t(neg.d(eax_2)) / fconvert.t(100f) + data_4f893c + data_4f8948), 
        fconvert.s(data_4f8924 - float.t(*(arg1 - 0xc)) / fconvert.t(100f) - data_4f8930))
    *(arg1 - 0x14) = 0
    *(arg1 - 0x18) = 0x3d4ccccd
    __builtin_strncpy(arg1 - 0x1c, "33S@", 4)
    *(arg1 - 0x20) = 0xc0680000
    *(arg1 - 0x14) = fconvert.s(fconvert.t(*(arg1 - 0x14)) - data_4f896c)
    *(arg1 - 0x1c) = fconvert.s(fconvert.t(*(arg1 - 0x1c)) - data_4f8978)
    *(arg1 - 0x24) = 0xbfc28f5c
    *(arg1 - 0x4c) = 0x3e4ccccd
    *(arg1 - 0x18) = fconvert.s(fconvert.t(*(arg1 - 0x18)) + fconvert.t(3f) + data_4f8988 - data_4f8994)
    __builtin_strncpy(arg1 - 0x20, "ff6@", 4)
    *(arg1 - 0x20) = fconvert.s(data_4f89a0 * fconvert.t(*(arg1 - 0x20)))
    return arg1
}
