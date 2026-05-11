// ============================================================
// 函数名称: sub_517b0c
// 虚拟地址: 0x517b0c
// WARP GUID: 47377974-30b4-5f1c-869a-1822fc9d9359
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4bca48, sub_4cd114, sub_517a94, sub_517880, sub_4bf070, sub_4cd498
// ============================================================

int32_t __convention("regparm")sub_517b0c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4_1 = ecx
    int32_t result = *(arg1 + (arg2 << 2) - 4)
    int16_t temp0 = *(arg1 + 0x100)
    *(arg1 + 0x100) -= 1
    
    if (add_overflow(temp0, 0xffff))
        sub_403010()
        noreturn
    
    int32_t edx = sx.d(*(arg1 + 0x100))
    
    if (edx s>= arg2)
        int32_t i_1 = edx - arg2 + 1
        void* eax = arg1 + (arg2 << 2)
        int32_t i
        
        do
            *(eax - 4) = *eax
            eax += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
