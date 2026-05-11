// ============================================================
// 函数名称: sub_497894
// 虚拟地址: 0x497894
// WARP GUID: 45ab008f-d169-51c8-8d53-da36eb0721f3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_415d18, sub_49657c, sub_4971fc, sub_496af4, sub_403428
// [被调用的父级函数]: sub_5166d8
// ============================================================

int32_t* __convention("regparm")sub_497894(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ecx
    int32_t* var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    sub_415d18(arg1, 0, ecx)
    int32_t edx
    edx.b = 1
    int32_t* eax_1 = sub_49657c(sub_49452c-0x24, edx, 0xffffffff)
    arg1[0x20] = eax_1
    sub_4971fc(arg1, eax_1)
    
    if (*(sub_496af4(arg1[0x20], 0xa) - 1) != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg1
}
