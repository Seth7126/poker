// ============================================================
// 函数名称: sub_511bec
// 虚拟地址: 0x511bec
// WARP GUID: 1694aafb-befc-5dcc-bf78-05a547567af2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_404138, sub_403e4c, sub_408e1c, sub_469a14, sub_50d9e0, sub_50d620, sub_403e1c
// [被调用的父级函数]: sub_511fd8, sub_51038c, sub_50d82b, sub_50d838
// ============================================================

int32_t __convention("regparm")sub_511bec(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t var_18 = 0
    char* var_1c = nullptr
    char* var_20 = nullptr
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403e4c(arg1 + 0x4c10, var_8)
    int32_t* esp
    void* ebp_1
    
    if (sub_50d9e0(*data_530084) == 0)
        int32_t var_38_1 = *(arg1 + 0x4c10)
        void* const var_3c_1 = &data_511d70
        int32_t var_40_1 = *(arg1 + 0x4c0c)
        void* const var_44_1 = &data_511d70
        sub_50d620(*data_530084, &var_20)
        char* var_48_1 = var_20
        char* ecx_1 = sub_404138(&var_1c, 5)
        esp = &var_8
        ebp_1 = sub_469a14(*data_530304, var_1c, ecx_1)
    else
        void* const var_38 = &data_511d28
        sub_408e1c(*(*data_530084 + 0x1b200), &var_10)
        int32_t var_3c = var_10
        void* const var_40 = &data_511d34
        sub_408e1c(*(*data_530084 + 0x1b204), &var_14)
        int32_t var_44 = var_14
        void* const var_48 = &data_511d34
        sub_408e1c(*(*data_530084 + 0x1b208), &var_18)
        int32_t var_4c_1 = var_18
        void* const var_50_1 = &data_511d40
        void* const var_54_1 = "waiting,running,sum Threads"
        char* ecx = sub_404138(&var_c, 8)
        esp = &var_14
        ebp_1 = sub_469a14(*data_530304, var_c, ecx)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_511d18
    return sub_403e1c(ebp_1 - 0x1c, 7)
}
