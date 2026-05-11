// ============================================================
// 函数名称: sub_4131b4
// 虚拟地址: 0x4131b4
// WARP GUID: b1b06ea7-8e69-5414-aa3e-ffef78b90bec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ee0, sub_4089dc, sub_403df8, sub_41622c
// [被调用的父级函数]: sub_4138b8, sub_4132fc
// ============================================================

int32_t* __convention("regparm")sub_4131b4(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    char* var_c = nullptr
    char* ebx_1 = arg2
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8 = 0
    
    if (ebx_1 != 0)
        void* edi_1 = arg1
        
        while (true)
            if (*ebx_1 == 0)
                void* var_8_1 = edi_1
                break
            
            char* eax = ebx_1
            
            while (true)
                arg2.b = *ebx_1
                
                if (arg2.b == 0)
                    break
                
                arg2.b -= 0x2d
                char temp1_1 = arg2.b
                arg2.b -= 2
                
                if (temp1_1 u< 2)
                    break
                
                ebx_1 = &ebx_1[1]
            
            sub_403ee0(&var_c, eax, ebx_1 - eax)
            void* esi_2 = sub_41622c(edi_1, var_c)
            
            if (esi_2 == 0)
                char eax_5
                eax_5, arg2 = sub_4089dc(var_c, "Owner")
                
                if (eax_5 != 0)
                    esi_2 = edi_1
            
            if (esi_2 == 0)
                break
            
            if (*ebx_1 == 0x2e)
                ebx_1 = &ebx_1[1]
            
            if (*ebx_1 == 0x2d)
                ebx_1 = &ebx_1[1]
            
            if (*ebx_1 == 0x3e)
                ebx_1 = &ebx_1[1]
            
            edi_1 = esi_2
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_413261
    int32_t* result = &var_c
    sub_403df8(result)
    return result
}
