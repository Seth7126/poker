// ============================================================
// 函数名称: sub_416764
// 虚拟地址: 0x416764
// WARP GUID: ba04f652-2496-516a-b6b9-fece8c67b584
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_4381c4, sub_4b6b50, sub_4b6b8d, sub_4380b8
// ============================================================

int32_t* __fastcallsub_416764(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg3 = sub_4033d0(arg1, arg2)
    
    sub_4030a0(arg1, 0)
    arg3[3] = arg1
    arg3[4].b = arg4
    
    if (arg2.b != 0)
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
