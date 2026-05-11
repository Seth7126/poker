// ============================================================
// 函数名称: sub_461a84
// 虚拟地址: 0x461a84
// WARP GUID: 7ee4db30-d2cd-577d-bf7a-c36fe4e927a5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_461234, sub_4611e4
// ============================================================

void (__thiscall** __convention("regparm")sub_461a84(void* arg1))(char* arg1, int32_t* arg2 @ eax, int32_t arg3)
{
    // 第一条实际指令: void (__thiscall** result)(char* arg1, int32_t* arg2 @ eax, int32_t arg3) = (**(arg1 + 4))()
    void (__thiscall** result)(char* arg1, int32_t* arg2 @ eax, int32_t arg3) = (**(arg1 + 4))()
    *(arg1 + 0x151) = result
    *result = sub_46180c
    result[1] = sub_461850
    result[2] = sub_461884
    result[3] = sub_46195c
    result[4] = sub_461a00
    result[5] = sub_461a0c
    return result
}
