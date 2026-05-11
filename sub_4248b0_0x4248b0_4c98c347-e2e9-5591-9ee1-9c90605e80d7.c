// ============================================================
// 函数名称: sub_4248b0
// 虚拟地址: 0x4248b0
// WARP GUID: 4c98c347-e2e9-5591-9ee1-9c90605e80d7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_40423c, sub_403df8, sub_4040c4, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4248b0(void* arg1, WPARAM arg2, char* arg3)
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
    int32_t var_c = 0
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 s>= 0)
        LRESULT ebx_1 = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xbb, arg2, 0)
        
        if (ebx_1 s< 0)
            LRESULT wParam = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xbb, arg2 - 1, 0)
            
            if (wParam s>= 0)
                LRESULT eax_8 = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xc1, wParam, 0)
                
                if (eax_8 != 0)
                    ebx_1 = wParam + eax_8
                    sub_4040c4(&var_c, sub_4249af+5, arg3)
                    goto label_424962
        else
            sub_4040c4(&var_c, arg3, sub_4249af+5)
        label_424962:
            SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xb1, ebx_1, ebx_1)
            LPARAM lParam = sub_40423c(var_c)
            SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xc2, 0, lParam)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4249a2
    int32_t* result = &var_c
    sub_403df8(result)
    return result
}
