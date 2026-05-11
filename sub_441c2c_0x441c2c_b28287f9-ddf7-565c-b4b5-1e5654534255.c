// ============================================================
// 函数名称: sub_441c2c
// 虚拟地址: 0x441c2c
// WARP GUID: b28287f9-ddf7-565c-b4b5-1e5654534255
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_4030d0, sub_42e7fc, sub_441068, sub_42c754, sub_42e838, sub_441220, sub_4030a0, sub_410524, sub_42b1dc, sub_441770, sub_42af98
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_441c2c(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* ebp)(void* arg1, void* arg2)
    int32_t (* var_4)(void* arg1, void* arg2) = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
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
    int32_t var_c = sub_42b1dc(ExceptionList)
    void* ebx_1 = ExceptionList->__offset(0x1f0).d
    int32_t eax_7
    
    if (sub_441220(ebx_1) == 0 || *(ebx_1 + 0x10) s<= var_c)
        eax_7 = 0
    else
        eax_7.b = 1
    
    char var_d = eax_7.b
    
    if (var_d != 0)
        var_c = *(ebx_1 + 0x10)
        sub_441770(ebx_1, 0)
    
    int32_t esi_2 = sub_42e838(ExceptionList) - 1
    
    if (esi_2 s>= 0)
        int32_t i_2 = esi_2 + 1
        int32_t ebx_2 = 0
        int32_t i
        
        do
            int32_t* eax_13 = sub_42e7fc(ExceptionList, ebx_2)
            sub_4103c8(eax_1, sub_42e7fc(ExceptionList, ebx_2))
            eax_13[0xe]
            eax_13[0xc]
            sub_42af98(eax_13)
            ebx_2 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t esi_4 = eax_1[2] - 1
    
    if (esi_4 s>= 0)
        int32_t i_3 = esi_4 + 1
        int32_t ebx_3 = 0
        int32_t i_1
        
        do
            sub_42c754(sub_410524(eax_1, ebx_3), 0)
            ebx_3 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (var_d != 0)
        sub_441068(ExceptionList->__offset(0x1f0).d)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = sub_441d3b
    return sub_4030d0(eax_1)
}
