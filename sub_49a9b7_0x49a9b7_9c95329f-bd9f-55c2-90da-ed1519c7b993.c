// ============================================================
// 函数名称: sub_49a9b7
// 虚拟地址: 0x49a9b7
// WARP GUID: 9c95329f-bd9f-55c2-90da-ed1519c7b993
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49a9e8, sub_49a8a4, sub_49a9d4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_49a9b7(char* arg1, int32_t* arg2, int32_t arg3, int32_t* arg4 @ ebp, char* arg5 @ esi, void* arg6 @ edi)
{
    // 第一条实际指令: *arg2 -= 1
    *arg2 -= 1
    *arg1 += arg1.b
    *(arg6 + 0x53) += arg2.b
    void* entry_ebx
    entry_ebx.b ^= *(arg6 + 0x33)
    arg3:1.b ^= *arg5
    char temp0 = *arg1
    *arg1 += arg1.b
    void* var_5 = arg6
    void* var_9 = entry_ebx
    void* var_d = entry_ebx
    void** esp = &var_d
    
    if (arg3 == 0xffffffff)
        return 
    
    if (temp0 + arg1.b u>= temp0)
        if (arg3 == 0xffffffff)
            *arg1 += arg1.b
            return sub_49a9d4() __tailcall
        
        char* var_11_1 = arg5
        void* var_15 = arg6
        esp = &var_15
    
    int32_t temp2 = data_5324b8
    data_5324b8 -= 1
    
    if (temp2 u< 1)
        sub_49a9d4()
        __builtin_memcpy(0x532498, &arg4[-4], 0x10)
        sub_49a9e8(&arg4[-4])
        __builtin_memcpy(0x5324a8, &arg4[-4], 0x10)
        sub_49a8a4()
    
    *esp
    esp[1]
    *arg4
}
