// ============================================================
// 函数名称: sub_4cf724
// 虚拟地址: 0x4cf724
// WARP GUID: e9c3267d-faba-52b6-846c-1f415c9058e0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2ca0, sub_403010
// [被调用的父级函数]: sub_4ce8e2, sub_4ce88a, sub_40e8c2, sub_4ce832
// ============================================================

int32_t __fastcallsub_4cf724(int32_t arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: void var_a8
    void var_a8
    __builtin_memcpy(&var_a8, arg1, 0x50)
    void var_58
    __builtin_memcpy(&var_58, arg2, 0x50)
    char var_5 = 1
    int32_t temp1 = *(arg3 + 0x10)
    *(arg3 + 0x10) += 1
    
    if (add_overflow(temp1, 1))
        sub_403010()
        noreturn
    
    *(arg3 + 0x10)
    bool o_1 = unimplemented  {imul eax, dword [esi+0x10], 0x2}
    
    if (o_1)
        sub_403010()
        noreturn
    
    void* ebx = arg3 + *(arg3 + 0x10) * 0x10 + 4
    int32_t eax
    eax.b = arg4
    *(ebx + 6) = eax.b
    char var_4c
    *ebx = var_4c
    char var_9c
    *(ebx + 1) = var_9c
    char var_48
    *(ebx + 4) = var_48
    char var_98
    *(ebx + 5) = var_98
    char var_54
    *(ebx + 2) = var_54
    char var_a4
    *(ebx + 3) = var_a4
    *(ebx + 0xc) = 0
    *(ebx + 8) = fconvert.s(float.t(*(data_530598 + 0x30)) * fconvert.t(1.5f))
    
    if (*(ebx + 5) == 6)
        int16_t var_50
        
        if (var_50 == 1)
            *(ebx + 8) = *(ebx + 8)
        
        if (var_50 == 2)
            *(ebx + 8) = *(ebx + 8)
        
        if (var_50 == 0)
            if (sub_4c2ca0() != 2)
                *(ebx + 8) = *(ebx + 8)
            else
                *(ebx + 8) = *(ebx + 8)
    
    int32_t edx
    edx.b = *(ebx + 4)
    int32_t edx_1 = edx * 0xd4f
    bool o_2 = unimplemented  {imul edx, edx, 0xd4f}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t ecx
    ecx.b = *ebx
    bool o_3 = unimplemented  {imul ecx, ecx, 0x2e9c}
    
    if (o_3)
        sub_403010()
        noreturn
    
    int32_t eax_11
    eax_11.b = *(ebx + 2)
    int32_t result = eax_11 * 0xa
    bool o_4 = unimplemented  {imul eax, eax, 0xa}
    
    if (o_4)
        sub_403010()
        noreturn
    
    int32_t esi_3 = *(arg3 + 0x10)
    
    if (add_overflow(esi_3, 0xffffffff))
        sub_403010()
        noreturn
    
    *(ecx * 0x174e0 + &data_532f70 + (edx_1 << 2) + (result << 3) - 0x174c4) = esi_3 - 1
    int32_t ecx_4
    ecx_4.b = *ebx
    bool o_6 = unimplemented  {imul ecx, ecx, 0x2e9c}
    
    if (o_6)
        sub_403010()
        noreturn
    
    *(ecx_4 * 0x174e0 + &data_532f70 + (edx_1 << 2) + (result << 3) - 0x174c8) = 0
    result.b = var_5
    return result
}
