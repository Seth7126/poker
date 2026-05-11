// ============================================================
// 函数名称: sub_496e00
// 虚拟地址: 0x496e00
// WARP GUID: 2c814613-54e1-5085-aed8-c27e78023bb7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_493f84, sub_496eb0, sub_415c40, sub_415c94, sub_415b58, sub_403428
// [被调用的父级函数]: sub_496a48
// ============================================================

int32_t* __fastcallsub_496e00(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, BOOL arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg3 = sub_4033d0(arg1, arg2)
    
    var_8:3.b = arg2.b
    *(arg3 + 0xe) = 1
    arg2.b = 1
    int32_t* eax
    int32_t ecx
    eax, ecx = sub_493f84(sub_493cfc+0x170, arg2)
    arg3[0xf] = eax
    ecx.b = 1
    sub_415b58(arg3, 0, ecx)
    int32_t edx
    edx.b = 4
    sub_415c40(arg3, edx)
    sub_496eb0(arg3, arg4)
    
    if (arg1.b == 0)
        sub_415c94(arg3)
    
    if (var_8:3.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg3
}
