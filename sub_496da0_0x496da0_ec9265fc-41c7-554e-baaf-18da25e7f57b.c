// ============================================================
// 函数名称: sub_496da0
// 虚拟地址: 0x496da0
// WARP GUID: ec9265fc-41c7-554e-baaf-18da25e7f57b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415b58, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_496a58
// ============================================================

int32_t* __fastcallsub_496da0(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
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
        arg3 = sub_4033d0(arg1, arg2)
    
    arg3[0xc] = arg4
    sub_415b58(arg3, 0, arg1)
    
    if (arg2.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg3
}
