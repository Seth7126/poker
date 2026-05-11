// ============================================================
// 函数名称: sub_4a0bb0
// 虚拟地址: 0x4a0bb0
// WARP GUID: e326c205-a07e-5ead-b077-ece75395157f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_40422c, sub_403010
// [被调用的父级函数]: sub_4a0e13
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4a0bb0(void* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t var_14 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi_1 = *(arg1 + 0x10)
    
    if (esi_1 == 0)
        sub_403df8(arg3)
    else
        int32_t i_2 = (*(*esi_1 + 0x14))()
        esp = &var_8
        
        if (add_overflow(i_2, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t esi_2 = 0
            int32_t i
            
            do
                (*(**(arg1 + 0x10) + 0xc))()
                
                if ((*data_530000)() == 1)
                    (*(**(arg1 + 0x10) + 0xc))()
                    break
                
                esi_2 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4a0c62
    sub_403df8(&var_14)
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
