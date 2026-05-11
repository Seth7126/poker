// ============================================================
// 函数名称: sub_42feb8
// 虚拟地址: 0x42feb8
// WARP GUID: ceaa8e36-678e-5414-8179-8a4985468a89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ActivateKeyboardLayout
// [内部子函数调用]: sub_4475f4, sub_4473f4, sub_4318d0, sub_408aa0, sub_403df8, sub_435d48
// [被调用的父级函数]: sub_42fe68
// ============================================================

void* __convention("regparm")sub_42feb8(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(data_530a80 + 8) != 0)
        if (arg1[0x56] != 0)
            sub_4475f4(*data_530a18, &var_8)
            
            if (sub_408aa0(arg1[0x56], var_8) != 0)
                int32_t* eax_7
                eax_7, ebp_1 = sub_4473f4(*data_530a18)
                esp = &var_8
                
                if ((*(*eax_7 + 0x14))() != 0)
                    HKL hkl = *(*data_530a18 + 0x30)
                    
                    if (arg1[0x55].b != 0)
                        int32_t* eax_13
                        eax_13, ebp_1 = sub_4473f4(*data_530a18)
                        arg1[0x56]
                        
                        if ((*(*eax_13 + 0x50))() s>= 0)
                            int32_t* eax_17
                            eax_17, ebp_1 = sub_4473f4(*data_530a18)
                            hkl = (*(*eax_17 + 0x18))()
                    
                    ActivateKeyboardLayout(hkl, KLF_ACTIVATE)
                    esp = &var_8
        
        int32_t eax_20
        int32_t edx_6
        eax_20, edx_6 = sub_4318d0(arg1)
        edx_6.b = arg1[0x55].b
        sub_435d48(eax_20, edx_6)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_42ff9e
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
