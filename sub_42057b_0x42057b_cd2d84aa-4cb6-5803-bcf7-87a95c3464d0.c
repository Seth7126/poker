// ============================================================
// 函数名称: sub_42057b
// 虚拟地址: 0x42057b
// WARP GUID: cd2d84aa-4cb6-5803-bcf7-87a95c3464d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4202fc
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_42057b(void* arg1 @ ebp, uint16_t* arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: char* eax
    char* eax
    int32_t ecx
    char ecx_1
    int16_t edx_1
    eax, edx_1, ecx_1 = (*ecx)()
    *eax += eax.b
    *(arg1 + 0x6f) += ecx_1
    int32_t eflags
    __outsb(edx_1, *arg2, arg2, eflags)
    void* esi_1 = *(arg3 + (arg1 << 1) + 0x72) * 0x6d6f7246
    int32_t var_4 = arg3
    void* ebp = *(esi_1 + 0x64) * 0x776f
    *(ebp - 0x75) += edx_1.b
    eax.b = __in_al_dx(edx_1, eflags)
    void* var_c = esi_1
    int32_t var_10 = arg3
    
    if (data_5316ef == 0)
        eax.b = 3
        struct _EXCEPTION_REGISTRATION_RECORD** eax_1
        void* ebp_1
        int32_t edi_1
        eax_1, ebp_1, edi_1 = sub_4202fc(eax.b, data_5316d0, sub_420613+5)
        data_5316d0 = eax_1
        return data_5316d0(*(ebp_1 + 8), *(ebp_1 + 0xc), edi_1)
    
    int32_t result = 0
    
    if (((*(ebp + 0x10)).b & 3) == 0)
        int32_t esi_2 = *(ebp + 8)
        
        if (esi_2 s< 0)
            return result
        
        if (esi_2 s>= data_5316c4(0) || *(ebp + 0xc) s< 0)
            return result
        
        if (data_5316c4(1) s<= *(ebp + 0xc))
            return result
    
    return 0x12340042
}
