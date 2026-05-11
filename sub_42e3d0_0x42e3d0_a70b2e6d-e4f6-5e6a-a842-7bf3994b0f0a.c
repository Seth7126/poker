// ============================================================
// 函数名称: sub_42e3d0
// 虚拟地址: 0x42e3d0
// WARP GUID: a70b2e6d-e4f6-5e6a-a842-7bf3994b0f0a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_4030d0, sub_42e7fc, sub_42c754, sub_42e838, sub_4030a0, sub_410524, sub_42b1dc, sub_42af98
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42e3d0(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* var_4)(void* arg1, void* arg2) = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
    int32_t edx
    edx.b = 1
    int32_t ecx
    int32_t* eax_1 = sub_4030a0(ecx, edx)
    __return_addr = &var_4
    var_4 = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_42b1dc(ExceptionList)
    int32_t ebx_2 = sub_42e838(ExceptionList) - 1
    
    if (ebx_2 s>= 0)
        int32_t i_2 = ebx_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            int32_t* eax_7 = sub_42e7fc(ExceptionList, esi_1)
            
            if (eax_7[1] == ExceptionList->Handler)
                sub_4103c8(eax_1, sub_42e7fc(ExceptionList, esi_1))
                eax_7[0xe]
                eax_7[0xc]
                sub_42af98(eax_7)
            
            esi_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t ebx_4 = eax_1[2] - 1
    
    if (ebx_4 s>= 0)
        int32_t i_3 = ebx_4 + 1
        int32_t esi_2 = 0
        int32_t i_1
        
        do
            sub_42c754(sub_410524(eax_1, esi_2), 0)
            esi_2 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = sub_42e49c
    return sub_4030d0(eax_1)
}
