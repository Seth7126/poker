// ============================================================
// 函数名称: sub_49b963
// 虚拟地址: 0x49b963
// WARP GUID: 70609ca1-4ff8-5fb6-b53d-f4d0eed06014
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4033d0, sub_49b9fe, sub_40b4b0, sub_49a8c8, sub_405ae8, sub_49aec8
// [被调用的父级函数]: sub_49b94e
// ============================================================

int32_t __fastcallsub_49b963(int32_t arg1, int32_t arg2, uint16_t arg3 @ ebp)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    void* entry_ebx
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(entry_ebx + 0x57), arg3)
    *(entry_ebx + 0x57) = temp0
    void* const* ebp = &__return_addr
    void* var_198 = entry_ebx
    int32_t esi
    int32_t var_19c = esi
    int32_t* esp_1 = &var_19c
    int32_t var_194 = 0
    
    if (arg2.b != 0)
        void var_1ac
        esp_1 = &var_1ac
        sub_4033d0(0, arg2)
    
    *(esp_1 - 4) = &__return_addr
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    sub_49aec8(0, 0)
    void* esp_5 = &esp_1[0x65]
    
    if (data_52fb50 == 0)
        void var_18e
        *(esp_5 - 4) = &var_18e
        *(esp_5 - 8) = 0x202
        esp_5 -= 8
        int32_t eax_2
        eax_2, ebp = sub_49a8c8()
        
        if (eax_2 == 0xffffffff)
            sub_405ae8(data_5309d0, &ebp[-0x65])
            int32_t edx_1
            edx_1.b = 1
            sub_40b4b0(sub_49aac0+0x200, edx_1, ebp[-0x65])
            sub_403828()
            noreturn
        
        data_52fb50 = 1
    
    *(esp_5 + 8)
    fsbase->NtTib.ExceptionList = *esp_5
    *(esp_5 + 8) = sub_49ba11
    return sub_49b9fe(ebp) __tailcall
}
