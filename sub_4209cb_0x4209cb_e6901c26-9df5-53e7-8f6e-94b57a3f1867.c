// ============================================================
// 函数名称: sub_4209cb
// 虚拟地址: 0x4209cb
// WARP GUID: e6901c26-9df5-53e7-8f6e-94b57a3f1867
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetModuleHandleA
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

HMODULEsub_4209cb(void* arg1 @ ebp, int32_t arg2 @ esi, int32_t arg3 @ edi, void arg4)
{
    // 第一条实际指令: char* eax
    char* eax
    char* edx_2
    void* entry_ebx
    eax, edx_2 = (*entry_ebx)()
    *eax += eax.b
    char temp0 = *(arg1 + 0x6e)
    *(arg1 + 0x6e) += eax.b
    
    if (temp0 == neg.b(eax.b))
        uint16_t* esi = *(entry_ebx + 0x70) * 0x4d79616c
        int32_t eflags
        uint16_t* esi_1 = __outsd(edx_2.w, *esi, esi, eflags)
        __outsb(edx_2.w, *esi_1, esi_1, eflags)
        *(arg3 + (arg1 << 1) + 0x72)
        eax.b |= *edx_2
        HMODULE result = GetModuleHandleA(arg4)
        data_5316e8 = result
        data_5316c4 = 0x4203e4
        data_5316c8 = 0x4204fc
        data_5316cc = sub_42046c
        __builtin_memcpy(&data_5316d0, 
            "\x94\x05\x42\x00\x2c\x06\x42\x00\x04\x07\x42\x00\xdc\x07\x42\x00\xb4\x08\x42\x00", 0x14)
        return result
    
    entry_ebx.b += eax.b
    void* arg_11 = arg1
    void* arg_d = entry_ebx
    void* arg_9 = &edx_2[1]
    *(edx_2 + 1)
    *eax += eax.b
    void* arg_4 = arg1 + 1
    __return_addr = &arg_4
    int32_t (* var_4)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_5316e4 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = sub_420a7c
    return 0
}
