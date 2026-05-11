// ============================================================
// 函数名称: sub_446dd8
// 虚拟地址: 0x446dd8
// WARP GUID: f6dac3a9-d0a8-5d0c-a5f9-1fc2f2d0e8ae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b6fc, sub_404078, sub_4043ac, sub_403ee0, sub_42b6ec, sub_40423c, sub_42b7a8, sub_403df8, sub_4431dc
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_446dd8(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_10 = ebx
    void* var_c = nullptr
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 - 0x10))(ExceptionList, var_18, var_14)
    int32_t eax_2 = **(arg2 + 8)
    
    if (eax_2 == 0xc)
        *(arg2 + 4)
        sub_42b6ec()
        sub_403ee0(&var_c, 0, 1)
        var_c = sub_404078(var_c)
        int32_t eax_12 = sub_40423c(var_c)
        *(arg2 + 4)
        sub_42b6fc(var_c, eax_12)
        int32_t edx_3 = sub_404078(var_c)
        
        if (edx_3 s> 0)
            int32_t eax_16 = 1
            
            while (true)
                void* ecx_2
                ecx_2.b = *(var_c + eax_16 - 1)
                char temp2_1 = ecx_2.b
                ecx_2.b -= 0xa
                
                if (temp2_1 != 0xa)
                    char temp3_1 = ecx_2.b
                    ecx_2.b -= 3
                    
                    if (temp3_1 != 3)
                        eax_16 += 1
                        int32_t temp4_1 = edx_3
                        edx_3 -= 1
                        
                        if (temp4_1 == 1)
                            break
                        
                        continue
                
                sub_4043ac(&var_c, eax_16 - 1)
                break
        
        ebp_1 = sub_42b7a8(arg1, var_c)
    else if (eax_2 == 0xb00b)
        sub_4431dc(arg1, *(*(arg2 + 4) + 0x47))
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_446eb4
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
