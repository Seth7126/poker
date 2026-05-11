// ============================================================
// 函数名称: sub_4f89ac
// 虚拟地址: 0x4f89ac
// WARP GUID: ce2641c4-6683-540d-a2f7-f68752cfeb77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ee44c, sub_4f0c7c, sub_403010
// [被调用的父级函数]: sub_4f8b60
// ============================================================

void*sub_4f89ac(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_4ee44c()
    (*data_5301d4)(0, 0x3df5c28f, 0)
    (*data_5306b4)(0xc25c0000, 0x3f800000, 0, 0)
    (*data_5301d4)(0, 0x4019999a, 0x3e4ccccd)
    int32_t eax_8 = *(arg1 - 8)
    
    if (neg.d(eax_8) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_5301d4)(
        fconvert.s(float.t(*(arg1 - 4)) / fconvert.t(100f) - data_4f8b3c + data_4f8b48
            + fconvert.t(0f)), 
        fconvert.s(float.t(neg.d(eax_8)) / fconvert.t(100f) + data_4f8b30), 
        fconvert.s(fconvert.t(-9f) - float.t(*(arg1 - 0xc)) / fconvert.t(100f)))
    *(arg1 - 0x14) = 0
    *(arg1 - 0x18) = 0x3ca3d70a
    __builtin_strncpy(arg1 - 0x1c, "33S@", 4)
    *(arg1 - 0x20) = 0xc0680000
    *(arg1 - 0x24) = 0
    *(arg1 - 0x50) = 3
    *(arg1 - 0x28) = *(arg1 - 0x20)
    *(arg1 - 0x2c) = *(arg1 - 0x1c)
    void* result = arg1
    
    if (*(result - 0x71) == 0)
        result = data_530598
        
        if (*(result + 0x3c0) s> 0)
            sub_4f0c7c(0xbe2)
            (*data_530334)(0x302, 0x303)
            return (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                fconvert.s(fconvert.t(1f) - float.t(*(data_530598 + 0x3c0)) / fconvert.t(99f)))
    
    return result
}
