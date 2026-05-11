// ============================================================
// 函数名称: sub_411b8c
// 虚拟地址: 0x411b8c
// WARP GUID: d1b246d6-716e-5a92-80cd-aa3aa4db580b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408aa0, sub_40c024, sub_404280, sub_403e1c
// [被调用的父级函数]: sub_411a80
// ============================================================

int32_t __convention("regparm")sub_411b8c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    void* var_18 = nullptr
    void* var_14 = nullptr
    int32_t edx
    int32_t var_c = edx
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi_2 = (*(*arg1 + 0x14))(ExceptionList, var_28, var_24) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t var_10_1 = 0
        int32_t i
        
        do
            (*(*arg1 + 0xc))(arg1)
            void* eax_3 = sub_40c024(0x411c4c, var_14)
            
            if (eax_3 != 0)
                int32_t* var_c_1 = &var_18
                sub_404280(eax_3 - 1, 1, var_14, var_c_1)
                
                if (sub_408aa0(var_18, var_c_1) == 0)
                    goto label_411c1d
            
            var_10_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t var_10_2 = 0xffffffff
    label_411c1d:
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_411c3a
    return sub_403e1c(&var_18, 2)
}
