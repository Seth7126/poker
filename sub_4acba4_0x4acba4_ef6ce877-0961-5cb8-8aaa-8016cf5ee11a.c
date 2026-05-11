// ============================================================
// 函数名称: sub_4acba4
// 虚拟地址: 0x4acba4
// WARP GUID: ef6ce877-0961-5cb8-8aaa-8016cf5ee11a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404078, sub_404138, sub_403e4c, sub_404080, sub_403e1c
// [被调用的父级函数]: sub_4ad027, sub_4ad030, sub_4ad614
// ============================================================

int32_t __convention("regparm")sub_4acba4(struct _EXCEPTION_REGISTRATION_RECORD* arg1, void* arg2, char* arg3, char** arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_10 = arg3
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
    sub_40422c(var_8)
    sub_40422c(arg2)
    sub_40422c(var_10)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_404078(arg2) s> 0)
        if (sub_404078(var_10) s> 0)
            sub_404080(&var_10, "; ")
        
        char* var_20_1 = var_10
        struct _EXCEPTION_REGISTRATION_RECORD* var_24_1 = var_8
        void* const var_28_1 = &data_4acc60
        void* var_2c_1 = arg2
        sub_404138(&var_10, 4)
        esp = &var_8
    
    sub_403e4c(arg4, var_10)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4acc46
    return sub_403e1c(&var_10, 3)
}
