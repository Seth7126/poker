// ============================================================
// 函数名称: sub_49cfe0
// 虚拟地址: 0x49cfe0
// WARP GUID: 8bfde5dd-0ae0-573a-9bd1-5a87c583c34f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4040c4, sub_404078, sub_404138, sub_403e4c, sub_404080, sub_405ae8, sub_40b4b0, sub_403e1c
// [被调用的父级函数]: sub_49cf70
// ============================================================

int32_t __convention("regparm")sub_49cfe0(void* arg1, char arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    char* var_c = nullptr
    char* var_10 = nullptr
    char* var_14 = nullptr
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    var_8:3.b = arg2
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_404078(*(arg1 + 8)) == 0)
        sub_405ae8(data_530548, &var_10)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(0x49ca60, edx_1, var_10)
        sub_403828()
        noreturn
    
    sub_4040c4(&var_c, *(arg1 + 8), "://")
    
    if (sub_404078(*(arg1 + 0x20)) s> 0 && (var_8:3.b & 1) != 0)
        sub_404080(&var_c, *(arg1 + 0x20))
        
        if (sub_404078(*(arg1 + 0x24)) s> 0)
            char* var_2c_1 = var_c
            void* const var_30_1 = &data_49d174
            int32_t var_34_1 = *(arg1 + 0x24)
            sub_404138(&var_c, 3)
        
        sub_404080(&var_c, U"@")
    
    if (sub_404078(*(arg1 + 0x18)) == 0)
        sub_405ae8(data_530278, &var_14)
        int32_t edx_5
        edx_5.b = 1
        sub_40b4b0(0x49ca60, edx_5, var_14)
        sub_403828()
        noreturn
    
    sub_404080(&var_c, *(arg1 + 0x18))
    
    if (sub_404078(*(arg1 + 0x10)) s> 0)
        char* var_2c_2 = var_c
        void* const var_30_2 = &data_49d174
        int32_t var_34_2 = *(arg1 + 0x10)
        sub_404138(&var_c, 3)
    
    char* var_2c_3 = var_c
    int32_t var_30_3 = *(arg1 + 0x14)
    int32_t var_34_3 = *(arg1 + 4)
    int32_t var_38 = *(arg1 + 0x28)
    sub_404138(&var_c, 4)
    
    if (sub_404078(*(arg1 + 0x1c)) s> 0 && (var_8:3.b & 2) != 0)
        char* var_30_4 = var_c
        void* const var_34_4 = &data_49d18c
        int32_t var_38_1 = *(arg1 + 0x1c)
        sub_404138(&var_c, 3)
    
    sub_403e4c(arg3, var_c)
    fsbase->NtTib.ExceptionList = var_2c_3
    int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_49d158
    return sub_403e1c(&var_14, 3)
}
