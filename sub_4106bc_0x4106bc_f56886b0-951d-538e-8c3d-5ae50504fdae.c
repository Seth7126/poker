// ============================================================
// 函数名称: sub_4106bc
// 虚拟地址: 0x4106bc
// WARP GUID: f56886b0-951d-538e-8c3d-5ae50504fdae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410580, sub_410414
// [被调用的父级函数]: sub_42b01c, sub_42a24c, sub_442735, sub_44657a, sub_416004, sub_442994, sub_4449fc, sub_496768, sub_4113dc, sub_4472cc, sub_415eb8, sub_43de98, sub_496698, sub_4367cc, sub_4108f8
// ============================================================

int32_t __convention("regparm")sub_4106bc(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t result = sub_410580(arg1, edx)
    
    if (result s>= 0)
        sub_410414(arg1, result)
    
    return result
}
