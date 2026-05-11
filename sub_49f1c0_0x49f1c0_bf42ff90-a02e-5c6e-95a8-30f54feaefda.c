// ============================================================
// 函数名称: sub_49f1c0
// 虚拟地址: 0x49f1c0
// WARP GUID: bf42ff90-a02e-5c6e-95a8-30f54feaefda
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408ad8, sub_49f548, sub_403e1c, sub_49f478, sub_403010
// [被调用的父级函数]: sub_4a2b90, sub_4b06c8
// ============================================================

int32_t __convention("regparm")sub_49f1c0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t var_18 = 0
    int32_t var_14 = 0
    int32_t var_c = arg2
    int32_t* var_8 = arg1
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg3 != 0)
        int32_t i_2 = (*(*var_8 + 0x14))()
        esp = &var_8
        
        if (add_overflow(i_2, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t ebx_1 = 0
            int32_t i
            
            do
                int32_t ebx_2
                ebx_2, ebp_1 = sub_49f478(ebp_1[-1], ebx_1, &ebp_1[-4])
                
                if (sub_408ad8(ebp_1[-2], ebp_1[-4]) != 0)
                    i_1 = sub_49f548(ebp_1[-1], ebx_2, &ebp_1[-5])
                    ebp_1[-5]
                    (*(*ebp_1[-3] + 0x34))()
                
                ebx_1 = ebx_2 + 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_49f262
    return sub_403e1c(&ebp_1[-5], 2)
}
