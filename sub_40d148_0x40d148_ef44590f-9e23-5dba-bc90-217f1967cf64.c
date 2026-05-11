// ============================================================
// 函数名称: sub_40d148
// 虚拟地址: 0x40d148
// WARP GUID: ef44590f-9e23-5dba-bc90-217f1967cf64
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40d0d3, sub_40d17c, sub_40d0dc
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_40d148(void* arg1 @ ebp, char* arg2 @ edi)
{
    // 第一条实际指令: sub_40d0dc(arg1, arg2)
    sub_40d0dc(arg1, arg2)
    char* esi
    sub_40d0d3(esi)
    int16_t eax
    eax:1.b = data_5314fb
    *arg2 = eax
    void* edi = &arg2[2]
    int32_t i = *(arg1 + 0xc) - 1
    
    do
        *edi = sub_40d0d3(esi).b
        edi += 1
        i -= 1
    while (i != 0)
    
    int32_t eax_1
    eax_1:1.b = 0x2b
    int32_t ecx_1 = *(arg1 + 8)
    
    if (ecx_1 u>= 4)
        ecx_1 = 0
    
    eax_1.b = 0x45
    int32_t ebx
    ebx.b = *(arg1 - 0x19)
    return sub_40d17c(eax_1, sx.d(*(arg1 - 0x1c)) - 1, ecx_1, edi) __tailcall
}
