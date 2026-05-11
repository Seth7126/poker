// ============================================================
// 函数名称: sub_4b5976
// 虚拟地址: 0x4b5976
// WARP GUID: 3cc5ae21-bb95-53e2-ad27-ad1c34f2ab86
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078
// [被调用的父级函数]: sub_4b5934
// ============================================================

int32_t __convention("regparm")sub_4b5976(void* arg1, uint16_t arg2, int32_t arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: char* eax
    char* eax
    eax.b = (arg1 + 1).b * 2
    *eax ^= eax.b
    eax.b |= 0x45
    int32_t eflags
    uint8_t* edi_1
    uint8_t temp0
    temp0, edi_1 = __insb(arg6 - 1, arg2, eflags)
    *edi_1 = temp0
    int32_t* entry_ebx
    int32_t* var_4 = entry_ebx
    
    if (arg6 - 1 s< 0)
        if (eax.b u< 0)
            int32_t eflags_1
            int16_t temp0_1
            temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg4 + 0x71), &var_4)
            *(arg4 + 0x71) = temp0_1
            
            if (arg4 != 0xffffffff)
                uint16_t* esi_1 = __outsd(arg2, *arg5, arg5, eflags_1)
                __outsb(arg2, *esi_1, esi_1, eflags_1)
                undefined
            
            if (sub_404078(*entry_ebx) s<= 0)
                jump(sub_4b5a34+0x4a)
            
            jump(0x4b5a74)
        
        __outsd(arg2, *arg5, arg5, eflags)
        
        if (eax.b u< 0)
            jump(&data_4b5914:3)
        
        jump(0x4b598a)
    
    if (arg4 + 1 s< 0)
        jump(0x3d75a56)
    
    if (not(add_overflow(arg4, 1)))
        *(edi_1 + 0x6e)
        *eax |= eax
        *eax += eax.b
        
        if (add_overflow(arg3, 1))
            jump(0x4b5a6c)
        
        jump(&data_4b5a08[3])
    
    arg5[5].b s>>= 0x8a
    int16_t es
    uint32_t var_8 = zx.d(es)
    char temp4 = eax.b
    eax.b -= 0x21
    
    if (temp4 u< 0x21)
        jump(sub_4b5a34+0x1a)
    
    jump(sub_4b5a34+0x46)
}
