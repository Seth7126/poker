// ============================================================
// 函数名称: sub_446b40
// 虚拟地址: 0x446b40
// WARP GUID: 668ad73f-8eb6-561a-8c12-e8b9b1bd6a7f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b6fc, sub_43003c, sub_404078, sub_42ad90, sub_4043ac, sub_403ee0, sub_42b6ec, sub_40423c, sub_42b7a8, sub_403df8, sub_4431dc, sub_4301c8
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_446b40(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    void* var_10 = nullptr
    int32_t ecx
    int32_t var_c = ecx
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    int32_t* esi_1 = arg1
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_4301c8(esi_1) == 1)
        sub_42b6ec()
        sub_403ee0(&var_10, 0, 1)
        sub_42b6fc(sub_404078(var_10), sub_40423c(var_10))
        int32_t edx_1 = sub_404078(var_10)
        
        if (edx_1 s> 0)
            int32_t eax_12 = 1
            
            while (true)
                void* ecx_2
                ecx_2.b = *(var_10 + eax_12 - 1)
                char temp1_1 = ecx_2.b
                ecx_2.b -= 0xa
                
                if (temp1_1 != 0xa)
                    char temp2_1 = ecx_2.b
                    ecx_2.b -= 3
                    
                    if (temp2_1 != 3)
                        eax_12 += 1
                        int32_t temp3_1 = edx_1
                        edx_1 -= 1
                        
                        if (temp3_1 == 1)
                            break
                        
                        continue
                
                sub_4043ac(&var_10, eax_12 - 1)
                break
        
        ebp_1, esi_1 = sub_42b7a8(esi_1, var_10)
        esp = &var_8
    
    sub_43003c(ebp_1[-2], ebp_1[-1])
    int32_t edx_6
    edx_6.b = 5
    sub_42ad90(ebp_1[-1], edx_6)
    
    if ((esi_1[8].b & 1) == 0)
        sub_4431dc(esi_1, 1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_446c20
    sub_403df8(&ebp_1[-3])
    return &ebp_1[-3]
}
