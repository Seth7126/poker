// ============================================================
// 函数名称: sub_4cda5c
// 虚拟地址: 0x4cda5c
// WARP GUID: f7a1aa69-f95a-5b8c-b5eb-5e29ee3e1d1b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4040c4, sub_404078, sub_404138, sub_403e4c, sub_4cb8e8, sub_404080, sub_408e1c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_525ab8, sub_4e6659, sub_528e4c, sub_50c5e0, sub_528770, sub_4fc834, sub_5223e8, sub_520efc, sub_4c2418, sub_4e649b, sub_528b98, sub_4c8aa0, sub_520a04, sub_528e43, sub_4c0984, sub_529818, sub_4c39c8
// ============================================================

int32_t __convention("regparm")sub_4cda5c(int32_t arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_20
    __builtin_memset(&var_20, 0, 0x1c)
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    struct _EXCEPTION_REGISTRATION_RECORD* var_8
    var_8:3.b = arg2
    int32_t esi_1 = arg1
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char ebx_1 = 0
    
    if (esi_1 s< 0)
        ebx_1 = 1
        int32_t temp2_1 = esi_1
        esi_1 = neg.d(esi_1)
        
        if (neg.d(temp2_1) == 0x80000000)
            sub_403010()
            noreturn
    
    if (*(*data_5301f4 + 0x20068) != 3)
        if (sub_4cb8e8() == 0)
            if (var_8:3.b == 0 || esi_1 s<= 0)
                bool o_6 = unimplemented  {imul eax, esi, 0xa}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                sub_408e1c(esi_1 * 0xa, arg3)
            else
                bool o_5 = unimplemented  {imul eax, esi, 0xa}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                sub_408e1c(esi_1 * 0xa, &var_20)
                sub_4040c4(arg3, U"+", var_20)
            
            sub_404080(arg3, 0x4cdc9c)
        else
            int32_t eax_7 = esi_1 * 2
            bool o_4 = unimplemented  {imul eax, esi, 0x2}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t temp0_1 = divs.dp.d(sx.q(eax_7), 0x64)
            int32_t temp1_1 = mods.dp.d(sx.q(eax_7), 0x64)
            char* var_14
            
            if (temp0_1 s<= 0)
                sub_408e1c(temp1_1, &var_14)
            else
                sub_408e1c(temp1_1, &var_14)
                
                while (sub_404078(var_14) s< 2)
                    sub_4040c4(&var_14, U"0", var_14)
                
                int32_t var_1c
                sub_408e1c(temp0_1, &var_1c)
                int32_t var_3c_1 = var_1c
                void* const var_40_1 = &data_4cdc84
                char* var_44_1 = var_14
                sub_404138(&var_14, 3)
                esp = &var_8
            
            if (var_8:3.b == 0 || esi_1 s<= 0)
                sub_403e4c(arg3, var_14)
            else
                sub_4040c4(arg3, U"+", var_14)
            
            if (temp0_1 s> 0)
                sub_404080(arg3, 0x4cdc9c)
            else
                sub_404080(arg3, " ct")
    else
        if (var_8:3.b == 0 || esi_1 s<= 0)
            bool o_3 = unimplemented  {imul eax, esi, 0xa}
            
            if (o_3)
                sub_403010()
                noreturn
            
            sub_408e1c(esi_1 * 0xa, arg3)
        else
            bool o_2 = unimplemented  {imul eax, esi, 0xa}
            
            if (o_2)
                sub_403010()
                noreturn
            
            char* var_18
            sub_408e1c(esi_1 * 0xa, &var_18)
            sub_4040c4(arg3, U"+", var_18)
        
        sub_404080(arg3, " $")
    
    if (ebx_1 != 0)
        sub_4040c4(arg3, "- ", *arg3)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4cdc50
    return sub_403e1c(&var_20, 4)
}
