// ============================================================
// 函数名称: sub_430304
// 虚拟地址: 0x430304
// WARP GUID: a37fdc16-65a7-5c42-a24f-bf43d43bf8f1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4030d0, sub_405b40, sub_4030a0, sub_405b58, sub_42968c
// [被调用的父级函数]: sub_446ad8
// ============================================================

int32_t** __convention("regparm")sub_430304(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2.b != arg1[0x51].b)
        arg1[0x51].b = arg2.b
        
        if ((arg1[8].b & 0x10) == 0)
            int32_t ecx_1
            int32_t edx_1
            ecx_1, edx_1 = sub_42968c(arg1, arg2)
            
            if (arg2.b != 0)
                if (arg1[0x50] == 0)
                    edx_1.b = 1
                    arg1[0x50] = sub_4030a0(ecx_1, edx_1)
                
                int32_t ebx_1
                ebx_1.w = 0xffcd
                sub_4032ac(arg1, &var_8)
                esp = &var_8
                sub_405b58(&arg1[0x52], var_8)
            else
                sub_4030d0(arg1[0x50])
                arg1[0x50] = 0
                sub_405b40(&arg1[0x52])
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4303b2
    int32_t** result = &var_8
    sub_405b40(result)
    return result
}
