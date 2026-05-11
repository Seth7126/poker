// ============================================================
// 函数名称: sub_4438e8
// 虚拟地址: 0x4438e8
// WARP GUID: e39891b6-f9bb-5631-a372-7a1602525cde
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4438e8(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    var_8 = arg1
    int32_t* eax = var_8
    
    if (eax[0x8b].b != 0)
        return eax
    
    var_8[0x8b].b = 1
    int32_t __saved_ebp
    int32_t* var_c = &__saved_ebp
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (var_8[0x14].b != 0)
        void* eax_4 = var_8[9]
        int32_t edx
        
        if (eax_4 != 0)
            edx.b = *(eax_4 + 0x4f)
            (*(*var_8 + 0x68))()
        else
            edx.b = *(data_5317d8 + 0x28)
            (*(*var_8 + 0x68))()
        int32_t edx_1
        edx_1.b = 1
        (*(*var_8 + 0x64))()
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = 0x44396c
    int32_t* eax_9 = var_8
    eax_9[0x8b].b = 0
    return eax_9
}
