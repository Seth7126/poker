// ============================================================
// 函数名称: sub_434ebc
// 虚拟地址: 0x434ebc
// WARP GUID: 057d3bdd-4ee7-590f-9f2a-47dc3ab6833c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_434d88, sub_4030a0, sub_4301dc, sub_4301c8
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_434ebc(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t var_18 = 0
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx_1
    int32_t edx_1
    edx_1, ecx_1 = (*(*arg2 + 8))(ExceptionList, var_2c, var_28)
    edx_1.b = 1
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = sub_4030a0(ecx_1, edx_1)
    int32_t* var_c_1 = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t ebx_3 = sub_4301c8(var_c_1[5]) - 1
    
    if (ebx_3 s>= 0)
        int32_t i_2 = ebx_3 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            void* eax_9 = sub_4301dc(var_c_1[5], esi_1)
            
            if (*(eax_9 + 0x47) == 0 && *(eax_9 + 8) != 0)
                *(eax_9 + 8)
                ExceptionList_1->Next->__offset(0x34).d()
            
            esi_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_4 = ExceptionList_1->Next->__offset(0x14).d()
    (*(*arg2 + 8))(arg2)
    
    if (i_4 - 1 s>= 0)
        int32_t i_3 = i_4
        int32_t esi_2 = 0
        int32_t i_1
        
        do
            void* edx_6 = (*(*ebp_1[-4] + 0xc))(ebp_1)
            ebp_1 = sub_434d88(ebp_1[-5], edx_6)
            esi_2 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_434fab
    return sub_4030d0(ebp_1[-4])
}
