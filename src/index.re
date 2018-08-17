open Reprocessing;

let setup = env => Env.size(~width=600, ~height=600, env);

let draw = (_state, env) => {
  Draw.background(Utils.color(~r=199, ~g=217, ~b=229, ~a=255), env);

  Draw.fill(Utils.color(~r=41, ~g=166, ~b=244, ~a=255), env);
  Draw.rect(~pos=(150, 150), ~width=300, ~height=300, env);

  Draw.fill(Utils.color(~r=166, ~g=22, ~b=22, ~a=255), env);
  Draw.ellipse(~center=(300, 300), ~radx=100, ~rady=100, env);

  Draw.fill(Utils.color(~r=63, ~g=191, ~b=63, ~a=255), env);
  Draw.triangle(~p1=(300, 250), ~p2=(250, 350), ~p3=(350, 350), env);
};

run(~setup, ~draw, ());