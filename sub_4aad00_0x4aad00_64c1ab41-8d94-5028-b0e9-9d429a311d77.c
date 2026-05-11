// ============================================================
// 函数名称: sub_4aad00
// 虚拟地址: 0x4aad00
// WARP GUID: 64c1ab41-8d94-5028-b0e9-9d429a311d77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0, sub_4a3350
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4aad00(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    int32_t ecx_1
    int32_t edx
    ecx_1, edx = sub_4a3350(arg1, 0)
    arg1[0x1a].b = 0
    edx.b = 1
    arg1[0x19] = sub_4030a0(ecx_1, edx)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg1
}
